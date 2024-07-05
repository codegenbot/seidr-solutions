```
def find_ordinal_value(input_string: str):
    if input_string.isdigit():
        return int(input_string)
    else:
        month = {"st": 1, "nd": 2, "rd": 3}
        for suffix in month:
            if input_string.endswith(suffix):
                if len(input_string) > 3 and input_string[-4].isdigit():
                    day = int(input_string[:-2])
                    if day % 100 < 10 or (day % 100 >= 13 and day % 100 <= 19):
                        return day
                    else:
                        suffix_val = month[suffix]
                        if day % 100 in {11, 12, 13}:
                            return day * suffix_val
                        elif day % 100 == 1:
                            return day
                        else:
                            return day * (suffix_val + (day % 10 != 1))
                else:
                    day = int(input_string[:-1])
                    if day < 10 or day > 20:
                        return day * month[suffix]
                    else:
                        if day == 11 or day == 12 or day == 13:
                            return day
                        else:
                            return day * (month[suffix] + (day % 10 != 1))
        if input_string.endswith("th"):
            if len(input_string) > 3 and input_string[-4].isdigit():
                day = int(input_string[:-2])
                if day < 10 or day >= 20:
                    return day * 1000
                else:
                    return day * 1001
            else:
                day = int(input_string[:-1])
                if day < 10 or day > 20:
                    return day * 1000
                else:
                    return day * 1001