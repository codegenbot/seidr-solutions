
def decode_cyclic(s):
    try:
        # Input validation step
        if not s or len(s) % 3 != 0:
            raise ValueError("Invalid input")
        
        groups = [s[(3 * i) : min((3 * i + 3), len(s))] for i in range((len(s) + 2) // 3)]
        decoded_groups = [(group[-1:] + group[:-1]) if len(group) == 3 else group for group in groups]
        return "".join(decoded_groups)
    except (ValueError, IndexError):
        print("Invalid input")
        return None