from typing import List

def parse_music(music_string: str) -> List[int]:
    return [
        4 if "o|" in note else 2 if "o" in note else 1
        for note in music_string.split(":")
    ]

music_input = input().strip()
while not music_input or not any(c.isalpha() or c in "|:" for c in music_input):
    print("Invalid input.")
    music_input = input().strip()

result = parse_music(music_input)
print(result)