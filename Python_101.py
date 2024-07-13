def words_string(s):
    if not s:
        return []
    return [
        ",".join(word.strip().title() for word in s.replace(",", " ").split())
        for _ in s.split(",")
    ]