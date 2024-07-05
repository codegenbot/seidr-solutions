from typing import List

def parse_music(music_string: str) -> List[int]:
    note_mapping = {'o': 4, 'o|': 2, '.|': 1}
    return [note_mapping[note] for note in music_string.split()]

# Read input from user
music_string = input()
# Print the output of parse_music function
print(parse_music(music_string))