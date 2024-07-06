    def luhn_algorithm(digits):
        result = 0
        for i, digit in enumerate(digits):
            if i % 2 == 0:
                digit *= 2
                if digit > 9:
                    digit -= 9
            result += digit
        return result