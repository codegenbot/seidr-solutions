import sys

def parse_music() -> List[int]:
    music_string = sys.stdin.readline().rstrip()
    notes_duration = {"o": 4, "o|": 2, ".": 1}
    return [
        notes_duration[note]
        for note in music_string.split("|")
        if note in notes_duration
    ]

result = parse_music()
print(result)