durations = {
        'o': 4,
        'o|': 2,
        '.|': 1
    }

    return [durations[note] for note in music_string.split()]