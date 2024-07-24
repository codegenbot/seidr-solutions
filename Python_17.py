beats = {
        'o': 4,
        'o|': 2,
        '.|': 1
    }

    music_notes = music_string.split()
    return [beats[note] for note in music_notes]