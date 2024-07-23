def parse_music():
    music_string = input("Enter music string (e.g., 'o||...|..||..|.||'): ")
    try:
        music_list = []
        i = 0
        while i < len(music_string):
            if i + 2 <= len(music_string) and music_string[i : i + 2] == "o|":
                music_list.append(4)
                i += 2
            elif i + 3 <= len(music_string) and music_string[i : i + 3] == ".|..|":
                music_list.append(1)
                i += 3
            elif i + 5 <= len(music_string) and music_string[i : i + 5] == "..|.|..|":
                music_list.append(0.5)
                i += 5
        return music_list
    except Exception as e:
        print(f"An error occurred: {e}")