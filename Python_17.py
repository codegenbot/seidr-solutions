def parse_music(s):
    s = s.lower()
    beats = s.replace("|", " ").split()
    beat_counts = {}
    for i in range(1, len(beats) + 1):
        if str(i) in beat_counts:
            beat_counts[str(i)] += 1
        else:
            beat_counts[str(i)] = 1
    return [beat_counts.get(str(i), 0) for i in range(1, len(beats) + 1)]