def find_missing_notes(music_string):
    all_notes = set("CDEFGAB")
    input_notes = set(music_string)
    missing_notes = all_notes - input_notes
    return sorted(list(missing_notes))


missing_notes = find_missing_notes(music_string)
print("Missing notes:", missing_notes)