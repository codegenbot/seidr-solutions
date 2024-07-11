if (date.empty()) return false;
    
    int days, months, years;
    if (sscanf(date.c_str(), "%d-%d-%d", &months, &days, &years) != 3) return false;
    
    if (months < 1 || months > 12) return false;
    
    if ((months == 1 || months == 3 || months == 5 || months == 7 || months == 8 || months == 10 || months == 12) && (days < 1 || days > 31)) return false;
    
    if ((months == 4 || months == 6 || months == 9 || months == 11) && (days < 1 || days > 30)) return false;
    
    if (months == 2) {
        if (years % 4 == 0) {
            if (days < 1 || days > 29) return false;
        } else {
            if (days < 1 || days > 28) return false;
        }
    }

    return true;
}