def odd_count(lst):
    def replace_with_count(s):
        count = sum(1 for char in s if char in "13579")
        return f"the number of odd elements {count}n the str{count}ng {count} of the {count}nput."

    return [replace_with_count(s) for s in lst]