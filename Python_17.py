from typing import List

def parse_music(music_string: str) -> List[int]:
    notes = {"do": 4, "re": 2, "mi": 1}
    return [notes[note] for note in music_string.split()]

music_string = input("Enter a music string containing notes 'do', 're', or 'mi' separated by spaces: ")
result = parse_music(music_string)
print(result)