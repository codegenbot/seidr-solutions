from typing import List

def parse_music(music_string: str) -> List[int]:
    return [
        4 if note == "o" else 2 if note == "o|" else 1 if note == "|" else 0
        for note in music_string
    ]


def main():
    music_string = input()  
    result = parse_music(music_string)  
    print(result)  


if __name__ == "__main__":
    main()