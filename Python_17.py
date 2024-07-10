def parse_music(music_data):
    notes = music_data.split()
    total_duration = 0
    for note in notes:
        if ":" in note:
            duration, _ = note.split(":")
            total_duration += int(duration)
        else:
            return "Invalid input format. Please provide notes with durations separated by colon."
    return total_duration

music_data = input("Enter notes separated by space and duration by colon: ")
print(parse_music(music_data))