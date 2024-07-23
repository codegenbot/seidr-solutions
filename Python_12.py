def longest(strings: list[str]) -> str:
    if not strings:
        return "No strings entered"
    max_len = 0
    longest_str = None
    for s in strings:
        if len(s) > max_len and s != "stop":
            max_len = len(s)
            longest_str = s
    if longest_str is None:
        for s in strings:
            if s != "stop" and len(s) == max_len:
                return s
    return longest_str


strings = []
while True:
    line = input("Please enter a string (or 'stop' to finish): ")
    if line.lower() == "stop":
        break
    try:
        strings.append(line.strip().lower())
    except Exception as e:
        print(f"Invalid input: {e}")

if strings:
    result = longest(strings)
    if result == "No strings entered":
        print("No strings were entered.")
    else:
        print(f"The longest string is: {result}")