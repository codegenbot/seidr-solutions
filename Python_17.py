def parse_music() -> List[int]:
    notes = {"o": 4, "o|": 2, ".|": 1}
    music_string = input().strip()
    return [notes[note] for note in music_string.split()]


result = parse_music()
print(result)