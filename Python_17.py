def parse_music(music_string):
    notes_dict = {
        "C": "Do",
        "D": "Re",
        "E": "Mi",
        "F": "Fa",
        "G": "Sol",
        "A": "La",
        "B": "Ti",
    }
    music_list = music_string.split()
    notes_translated = []
    for note in music_list:
        notes_translated.append(notes_dict.get(note, "Unknown"))
    return " ".join(notes_translated)