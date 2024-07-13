def camel_case(s):
    s = s.replace("-", " ")
    words = s.split()
    result = ""
    for i, word in enumerate(words):
        result += " " + word.capitalize() if i > 0 else word.lower()
    return result.strip().replace("  ", " ").strip()