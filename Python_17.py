from typing import List

def parse_music(music_string: str) -> List[int]:
    music_dict = {"o": 4, "o|": 2, "|": 1, "-": 0}
    return [music_dict[char] for char in music_string]

def main():
    music_string = input("Enter the music string: ")
    result = parse_music(music_string)
    print(result)

if __name__ == "__main__":
    main()