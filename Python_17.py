from typing import List

def parse_music(music_string: str) -> List[int]:
    beats = {"o": 4, "o|": 2, ".|": 1}
    return [beats[note] for note in music_string.split()]

# Read input from user until empty line
music_input = []
while True:
    line = input().strip()
    if not line:
        break
    music_input.append(line)

# Call the function with user input
result = [beat for line in music_input for beat in parse_music(line)]
print(result)