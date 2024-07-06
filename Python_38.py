    def decode_cyclic(s):
        try:
            groups = s[::3] + s[1::3] + s[2::3]
            return "".join(groups)
        except (ValueError, IndexError):
            print("Invalid input")
            return None