def file_name_check(file_name):
    return 'Yes' if (file_name.count('.') == 1 and
                     file_name.split('.')[0].isalpha() and
                     file_name.split('.')[1] in ['txt', 'exe', 'dll'] and
                     sum(c.isdigit() for c in file_name) <= 3) else 'No'