from typing import List


def parse_music(music_string: str) -> List[int]:
    beats_per_note = {"o": 4, "o|": 2, ".|": 1}
    result = []
    temp_beats = 0
    for char in music_string:
        if char == "o" or (
            char == "o" and music_string[music_string.index(char) + 1] == "|"
        ):
            result.append(temp_beats)
            temp_beats = beats_per_note[char]
        else:
            temp_beats += beats_per_note[".|"]
    result.append(temp_beats)
    return result