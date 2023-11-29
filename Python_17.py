from typing import List


def parse_music(music_string: str) -> List[int]:
    return [
        4 if char == "o" else 2 if char == "o|" else 1 if char == "|" else 0
        for _, char in enumerate(music_string)
    ]


# Prompt the user to enter the input
input_string = input("Enter the music string: ")

# Call the function with the user input and print the result
print(parse_music(input_string))