def fix_spaces(text):
    import re
    return re.sub(r"\s+", "_", text, count=1)

if __name__ == "__main__":
    input = sys.stdin.read()
    fix_spaces(input)