music_data = (
    input(
        "Enter notes separated by space, with each note in the format 'note:duration': "
    ).split()
    if all(":" in note for note in music_data)
    else print("Invalid input format.")
)