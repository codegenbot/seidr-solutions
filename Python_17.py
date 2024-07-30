try:
    music_string = input("Enter the music string (e.g. 'CDEFGAB'): ").strip()
    if all(note in 'CDEFGAB' for note in music_string):
        print("Input is valid")
    else:
        print("Input contains invalid characters")
except Exception as e:
    print("Error reading input:", e)