try:
    music_string = input("Enter the music string (e.g. 'CDEFGAB'): ").strip()
    if not music_string.isalpha():
        raise ValueError("Input should contain only alphabets")
except Exception as e:
    print("Error reading input:", e)