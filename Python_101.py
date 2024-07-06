
def words_string(s):
    inp = sys.stdin.readline()
    words = re.split(r"\s+", inp)
    if len(words) == 1:
        return "The string contains one word."
    else:
        return f"The string contains {len(words)} words."