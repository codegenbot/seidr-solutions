def parse_music(musical_string: str) -> List[int]:
    durations = {"o": 4, "o|": 2, ".|": 1}
    return [durations[note] for note in musical_string.split()]