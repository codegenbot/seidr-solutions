```
def parse_music(s):
    if not isinstance(s, str) or not s.strip():
        return []
    if not s:
        return []
    s = s.lower()
    beats = re.sub(r"[^\d|]+", " ", s).split("|")
    beat_counts = {}
    for beat in beats:
        if beat:
            try:
                beat_count, _ = map(int, beat.split())
                if 1 <= int(beat_count) <= max_beat:
                    if str(beat_count) in beat_counts:
                        beat_counts[str(beat_count)] += 1
                    else:
                        beat_counts[str(beat_count)] = 1
            except ValueError:
                return []
    try:
        max_beat = max(map(int, filter(None, beats)))
    except (ValueError, AttributeError):
        return []
    return [beat_counts.get(str(i), 0) for i in range(1, max_beat + 1)]