def parse_music(music_string):
    beats = []
    current_beat = ""
    for char in music_string:
        if char == "o":
            current_beat += "o"
        elif char in ["|", "."]:
            if len(current_beat) > 0:
                if current_beat == "ooo":
                    beats.append(4)
                elif current_beat == "o|":
                    beats.append(2)
                elif current_beat == ".| ":
                    beats.append(1)
                current_beat = ""
    return beats