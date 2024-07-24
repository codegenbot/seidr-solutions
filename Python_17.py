from typing import List


def parse_music(music_string: str) -> List[int]:
    notes_duration = {"o": 4, "o|": 2, ".|": 1}
    return [notes_duration[note] for note in music_string.split()]


# Prompting user to enter the music string
music_string = input("Enter the music string: ")

# Calling the parse_music function with user input
result = parse_music(music_string)

# Displaying the result
print(result)