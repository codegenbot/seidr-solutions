from typing import List

def parse_music(music_string: str) -> List[int]:
    notes_duration = {"o": 4, "o|": 2, ".|": 1}
    return [notes_duration[note] for note in music_string.split("|") if note in notes_duration]

music_string = input("Enter the music string in the format 'o|o|o|o': ")
if set(music_string.split('|')).issubset(['o', 'o.', '.o', '.']):
    result = parse_music(music_string)
    print(result)
    exit()
print("Invalid music string format. Please ensure the notes are separated by '|' and are either 'o', 'o.', '.o', or '.'.")