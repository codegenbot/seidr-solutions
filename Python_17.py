valid_notes = set('ABCDEFG')
while True:
    music_string = input("Enter the music string (e.g. 'CDEFGAB'): ").strip().upper()
    if music_string and set(music_string).issubset(valid_notes):
        def find_missing_notes(music_string):
            missing_notes = valid_notes - set(music_string)
            return ''.join(sorted(missing_notes))
        print(f"Missing notes: {find_missing_notes(music_string)}")
        break
    print("Invalid input. Please enter a valid music string with notes from 'ABCDEFG'.")