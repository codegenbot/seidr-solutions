if not music_string or not all(note in ["o", "o|", ".|"] for note in music_string.split("|")):
    return [] 