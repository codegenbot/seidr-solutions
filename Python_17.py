from typing import List

def parse_music(music_string: str) -> List[int]:
    return [
        4 if "o|" in note else 2 if "o" in note else 1
        for note in music_string.split(":")
    ]

music_input = input("Enter the music string: ")
while not music_input or not music_input.isalpha():
    print("Invalid input. Please enter a valid music string.")
    music_input = input("Enter the music string: ")

result = parse_music(music_input)
print(result)