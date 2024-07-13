def parse_music(s):
    if not s:
        return []
    s = s.lower()
    beats = re.sub(r"[^\d|]+", " ", s).split("|")
    beat_counts = {}
    for beat in beats:
        if beat:
            try:
                beat_count, _ = map(int, beat.split())
            except ValueError:
                return []
            if str(beat_count) in beat_counts:
                beat_counts[str(beat_count)] += 1
            else:
                beat_counts[str(beat_count)] = 1
    try:
        max_beat = int(max(map(int, beats)))
    except ValueError:
        return []
    return [beat_counts.get(str(i), 0) for i in range(1, max_beat + 1)]