valid_notes = set('ABCDEFG')
while True:
    music_string = input("Enter the music string using notes from 'ABCDEFG' (e.g. 'CDEFGAB'): ").strip().upper()
    if all(note in valid_notes for note in music_string):
        break
    print("Invalid input. Please enter a valid music string with notes from 'ABCDEFG'.")