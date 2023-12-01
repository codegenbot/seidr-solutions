def file_name_check(file_name):
    return 'Yes' if (
        len([c for c in file_name if c.isdigit()]) <= 3 and
        file_name.count('.') == 1 and
        file_name.split('.')[0].isalpha() and
        file_name.split('.')[1] in ['txt', 'exe', 'dll']
    ) else 'No'