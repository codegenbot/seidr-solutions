```
from typing import List

def main():
    music_string = input("Enter your music string: ")
    result = parse_music(music_string)
    print(result)

def parse_music(music_string: str) -> List[int]:
    music_list = []
    i = 0
    while i < len(music_string):
        if music_string[i:i+2] == 'o|':
            if i + 1 >= len(music_string) or music_string[i+2] != '|': 
                print("Invalid input. Please enter a valid sequence of notes.")
                return []
            music_list.append(3)
            i += 2
        elif music_string[i:i+4] == '.||||':
            if i + 3 >= len(music_string) or music_string[i+4] != '|': 
                print("Invalid input. Please enter a valid sequence of notes.")
                return []
            music_list.append(1)
            i += 4
        elif music_string[i] == 'o':
            if i + 5 <= len(music_string):
                if music_string[i:i+6] == 'oooou':
                    music_list.append(2)
                    i += 6
                else:
                    if i + 1 >= len(music_string): 
                        print("Invalid input. Please enter a valid sequence of notes.")
                        return []
                    music_list.append(4)
                    i += 1
            else:
                music_list.append(4)
                i += 1
    return music_list

if __name__ == "__main__":
    main()