def file_name_check(file_name):
    if file_name.count('.') == 1:
        name, ext = file_name.split('.')
        if ext in ['txt', 'exe', 'dll']:
            if name.isalpha() and name[0].isalpha():
                if sum(1 for c in name if c.isdigit()) <= 3:
                    return 'Yes'
    return 'No'