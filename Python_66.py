def digitSum(s):
    def get_digit_sum(sub_s):
        total = 0
        for char in sub_s:
            if char.isdigit():
                total += int(char)
        return total

    def get_char_sum(sub_s):
        total = 0
        for char in sub_s:
            if not char.isalnum():
                continue
            total += (ord(char.lower()) - 96) if char.islower() else (ord(char) - 64)
        return total

    return get_digit_sum(s) + get_char_sum(s)

print(digitSum("You arE Very Smart"))