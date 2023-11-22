from typing import List


def parse_music(music_string: str) -> List[int]:
    notes = music_string.split(":")
    parsed_notes = []
    for note in notes:
        if "o|" in note:
            parsed_notes.append(4)
        elif "o" in note:
            parsed_notes.append(2)
        else:
            return []
    return parsed_notes


music_input = input()
while not music_input:
    print("Invalid input. Please enter a valid music string.")
    music_input = input()

result = parse_music(music_input)
if result:
    print(result)
else:
    print("Invalid music string.")