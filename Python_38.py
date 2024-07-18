def rearrange_groups(groups):
    return "".join(
        [group[-1] + group[:-1] if len(group) == 3 else group for group in groups]
    )


# Call the function with the required input and return the result
input_groups = ["abc", "def", "ghi"]
rearranged_result = rearrange_groups(input_groups)
rearranged_result