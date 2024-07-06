
def words_string(s):
    inp = s.split()
    if len(inp) == 1:
        return "The string contains one word."
    else:
        return f"The string contains {len(inp)} words."
