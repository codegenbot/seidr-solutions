def decode_cyclic(s: str):
    try:
        user_input = raw_input("Enter a string to decode: ")
    except Exception as e:
        print("Error reading input:", e)
    if not user_input:
        return "No input provided."
    groups = [user_input[(3 * i):min((3 * i + 3), len(user_input))] for i in range((len(user_input) + 2) // 3)]
    groups = [(group[1:] + group[0]) if len(group) == 3 else group for group in groups]
    return "".join(groups)