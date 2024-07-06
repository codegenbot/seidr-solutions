from typing import List

def parse_music(music_string: str) -> List[int]:
    music_list = []
    i = 0
    
    while i < len(music_string):
        if music_string[i:i+2] == "o|":
            music_list.append(2)
            i += 2
        elif music_string[i:i+3] == ".| ":
            music_list.append(1)
            i += 3
        else:  # assume "o" means 4 notes
            j = i
            while j < len(music_string) and music_string[j] != "|":
                j += 1
            if j > i:  # ensure there is a "|" after "o"
                music_list.append(4)
                i = j
            else:
                break
    
    return music_list