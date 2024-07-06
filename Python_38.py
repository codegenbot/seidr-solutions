
def decode_cyclic(input_string: str) -> str:
    try:
        groups = [input_string[(3 * i):min((3 * i + 3), len(input_string))] for i in range((len(input_string) + 2) // 3)]
        return "".join([group[0] + group[1:] for group in groups])
    except:
        print("Invalid input format. Expected a string.")
        return ""