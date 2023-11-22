from typing import List

def parse_music(music_string: str) -> List[int]:
    return [
        4 if "o|" in note else 2 if "o" in note else 1
        for note in music_string.split(":")
    ]

while True:
    music_input = input()
    if ":" in music_input:
        break
    print("Invalid input. Please enter a valid music string.")

result = parse_music(music_input)
print(result)