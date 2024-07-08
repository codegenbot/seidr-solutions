```
def parse_music(music_string):
    music_beats = []
    beat = ""
    
    for char in music_string:
        if char == "o":
            beat += "o"
        elif char in ["|", "| ", "|"]:
            if len(beat) == 0:
                music_beats.append(".| ")
            else:
                music_beats.append("o" * (len(beat)))
            beat = ""
    
    if len(beat) > 0:
        music_beats.append("o" * len(beat))
    
    return music_beats