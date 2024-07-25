def digitSum(s):
    def get_digit_sum(sub_s):
        total = 0
        for char in sub_s:
            if char.isdigit():
                total += int(char)
            elif char.isalpha():
                total += ord(char.lower()) - 96 if char.islower() else ord(char.lower()) - 64
        return total

    return get_digit_sum(s)

print(digitSum("You arE Very Smart"))